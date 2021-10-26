// WidgetBlueprintGeneratedClass UI_InfoScreen.UI_InfoScreen_C
// Size: 0x32c (Inherited: 0x230)
struct UUI_InfoScreen_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* FadeIn; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* FadeOut; 
	UPROPERTY(BlueprintReadWrite) UWidgetAnimation* BlinkText; 
	UPROPERTY(BlueprintReadWrite) UAnimatedDRGlogo_C* AnimatedDRGlogo; 
	UPROPERTY(BlueprintReadWrite) UAnimatedStaticOverlay_C* AnimatedStaticOverlay; 
	UPROPERTY(BlueprintReadWrite) UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; 
	UPROPERTY(BlueprintReadWrite) UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_153; 
	UPROPERTY(BlueprintReadWrite) UBlurBackground_C* BlurBackground; 
	UPROPERTY(BlueprintReadWrite) UBasic_ButtonMultiline_C* BTN_Claim; 
	UPROPERTY(BlueprintReadWrite) UBasic_ButtonMultiline_C* BTN_Claimed; 
	UPROPERTY(BlueprintReadWrite) UBasic_ButtonMultiline_C* BTN_ClaimLocked; 
	UPROPERTY(BlueprintReadWrite) UBasic_ButtonScalable2_C* BTN_Continue; 
	UPROPERTY(BlueprintReadWrite) UBasic_ButtonMultiline_C* BTN_Join_Steam; 
	UPROPERTY(BlueprintReadWrite) UBasic_ButtonMultiline_C* BTN_Steam_Joined; 
	UPROPERTY(BlueprintReadWrite) UImage* FadeOverlay; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_1340; 
	UPROPERTY(BlueprintReadWrite) UImage* Image_Background; 
	UPROPERTY(BlueprintReadWrite) UHorizontalBox* JoinSteam_Buttons_HorizontalBox; 
	UPROPERTY(BlueprintReadWrite) UOptions_Language_C* Options_Language; 
	UPROPERTY(BlueprintReadWrite) UOptions_ShowInfoScreen_C* Options_ShowInfoScreen; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TEXT_Header1; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TEXT_Header2; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TEXT_Main; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TextBlock_3; 
	UPROPERTY(BlueprintReadWrite) UTextBlock* TextBlock_4; 
	UPROPERTY(BlueprintReadWrite) UUI_InfoScreen_DLCwidget_C* UI_InfoScreen_DLCwidget; 
	UPROPERTY(BlueprintReadWrite) UUI_InfoScreen_Overlay_DawnOfTheDread_DLC04_C* UI_InfoScreen_Overlay_DawnOfTheDread_DLC04; 
	UPROPERTY(BlueprintReadWrite) UUI_PatchNotes_C* UI_PatchNotes; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate OnClose; 
	UPROPERTY(BlueprintReadWrite) int32_t PathNodeIndex; 

	UFUNCTION(BlueprintCallable) FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	UFUNCTION(BlueprintCallable) void UpdateButtons(bool HasClaimed, bool IsFollowing);
	UFUNCTION(BlueprintCallable) void FadeIt(bool FadeIn, float Duration);
	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void BndEvt__Button_210_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Button_4_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Button_5_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void PreConstruct(bool IsDesignTime);
	UFUNCTION(BlueprintCallable) void BndEvt__BTN_Steam_K2Node_ComponentBoundEvent_130_On Clicked__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__BTN_Steam_Joined_K2Node_ComponentBoundEvent_136_On Clicked__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_82_OnClicked__DelegateSignature();
	UFUNCTION(BlueprintCallable) void SetupAnimHandlers();
	UFUNCTION(BlueprintCallable) void OnFadeInStarted();
	UFUNCTION(BlueprintCallable) void OnFadeInFinished();
	UFUNCTION(BlueprintCallable) void FadeOutStarted();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_UI_InfoScreen(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void OnClose__DelegateSignature(UUI_InfoScreen_C* Screen);
};

