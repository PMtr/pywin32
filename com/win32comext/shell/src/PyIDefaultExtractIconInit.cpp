// This file implements the IDefaultExtractIconInit Interface and Gateway for Python.
// Generated by makegw.py

#include "shell_pch.h"
#include "PyIDefaultExtractIconInit.h"

// @doc - This file contains autoduck documentation
// ---------------------------------------------------
//
// Interface Implementation

PyIDefaultExtractIconInit::PyIDefaultExtractIconInit(IUnknown *pdisp):
	PyIUnknown(pdisp)
{
	ob_type = &type;
}

PyIDefaultExtractIconInit::~PyIDefaultExtractIconInit()
{
}

/* static */ IDefaultExtractIconInit *PyIDefaultExtractIconInit::GetI(PyObject *self)
{
	return (IDefaultExtractIconInit *)PyIUnknown::GetI(self);
}

// @pymethod |PyIDefaultExtractIconInit|SetFlags|Description of SetFlags.
PyObject *PyIDefaultExtractIconInit::SetFlags(PyObject *self, PyObject *args)
{
	IDefaultExtractIconInit *pIDEII = GetI(self);
	if ( pIDEII == NULL )
		return NULL;
	// @pyparm int|uFlags||Description for uFlags
	UINT uFlags;
	if ( !PyArg_ParseTuple(args, "i:SetFlags", &uFlags) )
		return NULL;
	HRESULT hr;
	PY_INTERFACE_PRECALL;
	hr = pIDEII->SetFlags( uFlags );
	PY_INTERFACE_POSTCALL;
	if ( FAILED(hr) )
		return PyCom_BuildPyException(hr, pIDEII, IID_IDefaultExtractIconInit );
	Py_INCREF(Py_None);
	return Py_None;
}

// @pymethod |PyIDefaultExtractIconInit|SetKey|Description of SetKey.
PyObject *PyIDefaultExtractIconInit::SetKey(PyObject *self, PyObject *args)
{
	IDefaultExtractIconInit *pIDEII = GetI(self);
	if ( pIDEII == NULL )
		return NULL;
	HKEY hkey;
	PyObject *obhkey;
	// @pyparm <o PyHKEY>|hkey||Description for hkey
	if ( !PyArg_ParseTuple(args, "O:SetKey", &obhkey) )
		return NULL;
	if (!PyWinObject_AsHKEY(obhkey, &hkey))
		return NULL;
	HRESULT hr;
	PY_INTERFACE_PRECALL;
	hr = pIDEII->SetKey( hkey );
	PY_INTERFACE_POSTCALL;
	if ( FAILED(hr) )
		return PyCom_BuildPyException(hr, pIDEII, IID_IDefaultExtractIconInit );
	Py_INCREF(Py_None);
	return Py_None;
}

// @pymethod |PyIDefaultExtractIconInit|SetNormalIcon|Description of SetNormalIcon.
PyObject *PyIDefaultExtractIconInit::SetNormalIcon(PyObject *self, PyObject *args)
{
	IDefaultExtractIconInit *pIDEII = GetI(self);
	if ( pIDEII == NULL )
		return NULL;
	// @pyparm <o unicode>|pszFile||Description for pszFile
	// @pyparm int|iIcon||Description for iIcon
	PyObject *obpszFile;
	LPWSTR pszFile;
	int iIcon;
	if ( !PyArg_ParseTuple(args, "Oi:SetNormalIcon", &obpszFile, &iIcon) )
		return NULL;
	if (!PyWinObject_AsBstr(obpszFile, &pszFile))
		return NULL;
	HRESULT hr;
	PY_INTERFACE_PRECALL;
	hr = pIDEII->SetNormalIcon( pszFile, iIcon );
	SysFreeString(pszFile);
	PY_INTERFACE_POSTCALL;
	if ( FAILED(hr) )
		return PyCom_BuildPyException(hr, pIDEII, IID_IDefaultExtractIconInit );
	Py_INCREF(Py_None);
	return Py_None;
}

// @pymethod |PyIDefaultExtractIconInit|SetOpenIcon|Description of SetOpenIcon.
PyObject *PyIDefaultExtractIconInit::SetOpenIcon(PyObject *self, PyObject *args)
{
	IDefaultExtractIconInit *pIDEII = GetI(self);
	if ( pIDEII == NULL )
		return NULL;
	// @pyparm <o unicode>|pszFile||Description for pszFile
	// @pyparm int|iIcon||Description for iIcon
	PyObject *obpszFile;
	LPWSTR pszFile;
	int iIcon;
	if ( !PyArg_ParseTuple(args, "Oi:SetOpenIcon", &obpszFile, &iIcon) )
		return NULL;
	if (!PyWinObject_AsBstr(obpszFile, &pszFile))
		return NULL;
	HRESULT hr;
	PY_INTERFACE_PRECALL;
	hr = pIDEII->SetOpenIcon( pszFile, iIcon );
	SysFreeString(pszFile);

	PY_INTERFACE_POSTCALL;

	if ( FAILED(hr) )
		return PyCom_BuildPyException(hr, pIDEII, IID_IDefaultExtractIconInit );
	Py_INCREF(Py_None);
	return Py_None;
}

// @pymethod |PyIDefaultExtractIconInit|SetShortcutIcon|Description of SetShortcutIcon.
PyObject *PyIDefaultExtractIconInit::SetShortcutIcon(PyObject *self, PyObject *args)
{
	IDefaultExtractIconInit *pIDEII = GetI(self);
	if ( pIDEII == NULL )
		return NULL;
	// @pyparm <o unicode>|pszFile||Description for pszFile
	// @pyparm int|iIcon||Description for iIcon
	PyObject *obpszFile;
	LPWSTR pszFile;
	int iIcon;
	if ( !PyArg_ParseTuple(args, "Oi:SetShortcutIcon", &obpszFile, &iIcon) )
		return NULL;
	if (!PyWinObject_AsBstr(obpszFile, &pszFile))
		return NULL;
	HRESULT hr;
	PY_INTERFACE_PRECALL;
	hr = pIDEII->SetShortcutIcon( pszFile, iIcon );
	SysFreeString(pszFile);

	PY_INTERFACE_POSTCALL;

	if ( FAILED(hr) )
		return PyCom_BuildPyException(hr, pIDEII, IID_IDefaultExtractIconInit );
	Py_INCREF(Py_None);
	return Py_None;
}

// @pymethod |PyIDefaultExtractIconInit|SetDefaultIcon|Description of SetDefaultIcon.
PyObject *PyIDefaultExtractIconInit::SetDefaultIcon(PyObject *self, PyObject *args)
{
	IDefaultExtractIconInit *pIDEII = GetI(self);
	if ( pIDEII == NULL )
		return NULL;
	// @pyparm <o unicode>|pszFile||Description for pszFile
	// @pyparm int|iIcon||Description for iIcon
	PyObject *obpszFile;
	LPWSTR pszFile;
	int iIcon;
	if ( !PyArg_ParseTuple(args, "Oi:SetDefaultIcon", &obpszFile, &iIcon) )
		return NULL;
	if (!PyWinObject_AsBstr(obpszFile, &pszFile))
		return NULL;
	HRESULT hr;
	PY_INTERFACE_PRECALL;
	hr = pIDEII->SetDefaultIcon( pszFile, iIcon );
	SysFreeString(pszFile);

	PY_INTERFACE_POSTCALL;

	if ( FAILED(hr) )
		return PyCom_BuildPyException(hr, pIDEII, IID_IDefaultExtractIconInit );
	Py_INCREF(Py_None);
	return Py_None;
}

// @object PyIDefaultExtractIconInit|Description of the interface
static struct PyMethodDef PyIDefaultExtractIconInit_methods[] =
{
	{ "SetFlags", PyIDefaultExtractIconInit::SetFlags, 1 }, // @pymeth SetFlags|Description of SetFlags
	{ "SetKey", PyIDefaultExtractIconInit::SetKey, 1 }, // @pymeth SetKey|Description of SetKey
	{ "SetNormalIcon", PyIDefaultExtractIconInit::SetNormalIcon, 1 }, // @pymeth SetNormalIcon|Description of SetNormalIcon
	{ "SetOpenIcon", PyIDefaultExtractIconInit::SetOpenIcon, 1 }, // @pymeth SetOpenIcon|Description of SetOpenIcon
	{ "SetShortcutIcon", PyIDefaultExtractIconInit::SetShortcutIcon, 1 }, // @pymeth SetShortcutIcon|Description of SetShortcutIcon
	{ "SetDefaultIcon", PyIDefaultExtractIconInit::SetDefaultIcon, 1 }, // @pymeth SetDefaultIcon|Description of SetDefaultIcon
	{ NULL }
};

PyComTypeObject PyIDefaultExtractIconInit::type("PyIDefaultExtractIconInit",
		&PyIUnknown::type,
		sizeof(PyIDefaultExtractIconInit),
		PyIDefaultExtractIconInit_methods,
		GET_PYCOM_CTOR(PyIDefaultExtractIconInit));
