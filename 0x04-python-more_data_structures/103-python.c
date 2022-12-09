#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - Prints bytes information
 * @p: Python Object
 * Return: no return
 */
void print_python_bytes(PyObject *p)
{
	char *string;
	long int size, i, limit;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	size = ((PyVarObject *)(p))->ob_size;
	string = ((PyBytesObject *)p)->ob_sval;


	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", string);

	if (size >= 10)
		limit = 10;
	Skip to content

		Search or jump to…

		Pulls

		Issues

		Codespaces

		Marketplace

		Explore

		 

		@Sunmibola 

		ehoneahobed

		/

		alx-higher_level_programming

		Public

		Code

		Issues

		Pull requests

		Actions

		Projects

		Security

		Insights

		alx-higher_level_programming/0x04-python-more_data_structures/103-python.c

		@ehoneahobed

		ehoneahobed Add solution to advanced tasks

		Latest commit 88c3bff on Aug 31

		 History

		  1 contributor

		  70 lines (58 sloc)  1.31 KB



#include <stdio.h>

#include <Python.h>


