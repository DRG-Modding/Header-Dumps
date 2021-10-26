// WidgetBlueprintGeneratedClass Popup_Saveslots.Popup_Saveslots_C
// Size: 0x288 (Inherited: 0x270)
struct UPopup_Saveslots_C : UWindowWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UBasic_ButtonScalable2_C* BTN_Close; 
	UPROPERTY(BlueprintReadWrite) UMenu_SaveSlots_C* Menu_SaveSlots; 

	UFUNCTION(BlueprintCallable) FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	UFUNCTION(BlueprintCallable) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	UFUNCTION(BlueprintCallable) void BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Close();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Popup_Saveslots(int32_t EntryPoint);
};

