// BlueprintGeneratedClass LIB_Input.LIB_Input_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_Input_C : UBlueprintFunctionLibrary {

	bool IsSelectNext(FKeyEvent KeyEvent, UObject* __WorldContext);
	bool IsSelectPrevious(FKeyEvent KeyEvent, UObject* __WorldContext);
	bool IsBackMenuMouse(FPointerEvent Pointer Event, UObject* __WorldContext);
	bool IsUseButton(FKeyEvent Input, UObject* __WorldContext);
	bool IsOkMenu(FKeyEvent Input, UObject* __WorldContext);
	bool IsCloseOrBackMenu(FKeyEvent Input, UObject* __WorldContext);
};

