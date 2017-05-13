#pragma once

#include "UnrealEnginePython.h"

#if WITH_EDITOR

#include "UEPySCompoundWidget.h"

#include "Runtime/SlateCore/Public/Widgets/SWindow.h"

extern PyTypeObject ue_PySWindowType;

typedef struct {
	ue_PySCompoundWidget s_compound_widget;
	/* Type-specific fields go here. */
} ue_PySWindow;

void ue_python_init_swindow(PyObject *);

#endif