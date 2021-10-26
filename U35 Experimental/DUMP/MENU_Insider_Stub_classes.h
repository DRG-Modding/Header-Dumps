// WidgetBlueprintGeneratedClass MENU_Insider_Stub.MENU_Insider_Stub_C
// Size: 0x2a8 (Inherited: 0x270)
struct UMENU_Insider_Stub_C : UWindowWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UAnimatedDRGlogo_C* AnimatedDRGlogo; 
	UPROPERTY(BlueprintReadWrite) UBlurBackground_C* BlurBackground_C_1; 
	UPROPERTY(BlueprintReadWrite) UBasic_ButtonScalable2_C* Button_OK; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_52; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TEXT_Main; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TextBlock_4; 

	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	UFUNCTION(BlueprintCallable) void Close();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_MENU_Insider_Stub(int32_t EntryPoint);
};

