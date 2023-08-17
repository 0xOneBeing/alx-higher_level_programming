#include <Python.h>

/**
 * print_python_list - Prints Python list
 * @p: The Python object
 *
 * Code by 0xOneBeing
 */
void print_python_list(PyObject *p)
{
	if (PyList_Check(p))
	{
		Py_ssize_t size = PyList_Size(p);
		PyObject *item;

		printf("[*] Python list info\n");
		printf("[*] Size of the Python List = %zd\n", size);
		printf("[*] Allocated = %zd\n", ((PyListObject *)p)->allocated);

		for (Py_ssize_t i = 0; i < size; ++i)
		{
			item = PyList_GetItem(p, i);
			printf("Element %zd: %s\n", i, Py_TYPE(item)->tp_name);
		}
	}
	else
	{
		fprintf(stderr, "  [ERROR] Invalid List Object\n");
	}
}

/**
 * print_python_bytes - Prints Python bytes
 * @p: The Python object
 *
 * Code by 0xOneBeing
 */
void print_python_bytes(PyObject *p)
{
	if (PyBytes_Check(p))
	{
		Py_ssize_t size = PyBytes_Size(p);
		const char *str = PyBytes_AsString(p);

		printf("[.] bytes object info\n");
		printf("  size: %zd\n", size);
		printf("  trying string: %s\n", str);

		if (size < 10)
		{
			printf("  first %zd bytes:", size + 1);
		}
		else
		{
			printf("  first 10 bytes:");
		}

		for (Py_ssize_t i = 0; i < size + 1 && i < 10; ++i)
		{
			printf(" %02hhx", str[i]);
		}
		printf("\n");
	}
	else
	{
		fprintf(stderr, "[ERROR] Invalid Bytes Object\n");
	}
}
