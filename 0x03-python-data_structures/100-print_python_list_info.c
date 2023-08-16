#include <Python.h>
#include <object.h>
#include <listobject.h>

/**
* print_python_list_info - Prints some basic info about pytohn list.
* @p: The python object.
*
* Code by 0xOneBeing
*/

void print_python_list_info(PyObject *p)
{
	long int pyl_size = PyList_Size(p);
	int i;
	PyListObject *pyl_obj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", pyl_size);
	printf("[*] Allocated = %li\n", pyl_obj->allocated);
	for (i = 0; i < pyl_size; i++)
		printf("Element %i: %s\n", i, Py_TYPE(pyl_obj->ob_item[i])->tp_name);
}
