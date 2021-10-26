// WidgetBlueprintGeneratedClass UI_InfoScreen_Overlay_DawnOfTheDread_DLC04.UI_InfoScreen_Overlay_DawnOfTheDread_DLC04_C
// Size: 0x2a0 (Inherited: 0x230)
struct UUI_InfoScreen_Overlay_DawnOfTheDread_DLC04_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Click; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Hover; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* Idle; 
	UPROPERTY(BlueprintReadWrite) UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; 
	UPROPERTY(BlueprintReadWrite) UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C; 
	UPROPERTY(BlueprintReadWrite) UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1; 
	UPROPERTY(BlueprintReadWrite) UBlurBackground_C* BlurBackground; 
	UPROPERTY(BlueprintReadWrite) UButton* Button_1; 
	UPROPERTY(BlueprintReadWrite) UImage* Glow1; 
	UPROPERTY(BlueprintReadWrite) UImage* Glow2; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_194; 
	UPROPERTY(BlueprintReadWrite) bool NewVar_1; 
	UPROPERTY(BlueprintReadWrite) UGameDLC* dlc; 

	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_InfoScreen_Overlay_DawnOfTheDread_DLC04(int32_t EntryPoint);
};

