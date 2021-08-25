// BlueprintGeneratedClass LIB_Input.LIB_Input_C
// Size: 0x28 (Inherited: 0x28)
struct ULIB_Input_C : UBlueprintFunctionLibrary {

	bool IsSelectNext(struct FKeyEvent KeyEvent, struct UObject* __WorldContext); // Function LIB_Input.LIB_Input_C.IsSelectNext
	bool IsSelectPrevious(struct FKeyEvent KeyEvent, struct UObject* __WorldContext); // Function LIB_Input.LIB_Input_C.IsSelectPrevious
	bool IsBackMenuMouse(struct FPointerEvent Pointer Event, struct UObject* __WorldContext); // Function LIB_Input.LIB_Input_C.IsBackMenuMouse
	bool IsUseButton(struct FKeyEvent Input, struct UObject* __WorldContext); // Function LIB_Input.LIB_Input_C.IsUseButton
	bool IsOkMenu(struct FKeyEvent Input, struct UObject* __WorldContext); // Function LIB_Input.LIB_Input_C.IsOkMenu
	bool IsCloseOrBackMenu(struct FKeyEvent Input, struct UObject* __WorldContext); // Function LIB_Input.LIB_Input_C.IsCloseOrBackMenu
};

