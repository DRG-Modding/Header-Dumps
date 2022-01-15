#ifndef UE4SS_SDK_LoreScreen_Template_HPP
#define UE4SS_SDK_LoreScreen_Template_HPP

class ULoreScreen_Template_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* MovieIntro;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UImage* HeaderImage;
    UImage* Image_Background;
    UImage* Image_Gradient;
    UImage* Image_MovieBackground;
    ULore_Content_Text_Header_C* Lore_Content_Text_Header;
    UImage* MovieCanvas;
    UOverlay* Overlay_Holder;
    UOverlay* Overlay_MovieCanvas;
    UNamedSlot* PutStuffHere;
    UScrollBox* ScrollBox_Holder;
    USizeBox* SizeBox_OuterSizer;
    UMediaPlayer* MediaPlayer;
    UMediaTexture* MediaTexture;
    FLoreScreen_Template_COnShown OnShown;
    void OnShown();
    bool CanScroll;

    void SetHeadline(FText SetHeadline, UTexture2D* Icon, FObjectiveMissionIcon MissionIcon);
    void PreConstruct(bool IsDesignTime);
    void SetHeaderMovie(const UMediaSource* MediaSource);
    void SetHeaderImage(UTexture2D* HeaderImage, bool Strech, float VerticalFillPercent, bool UseGradient);
    void SetHeaderMaterial(UMaterialInterface* Material, FVector2D Size);
    void OnOpened(FString OpenedUrl);
    void ExecuteUbergraph_LoreScreen_Template(int32 EntryPoint, const UMediaSource* K2Node_CustomEvent_MediaSource, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FString CallFunc_GetUrl_ReturnValue, UTexture2D* K2Node_CustomEvent_HeaderImage, bool K2Node_CustomEvent_Strech, float K2Node_CustomEvent_VerticalFillPercent, bool K2Node_CustomEvent_UseGradient, FString CallFunc_GetUrl_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, FAnchors K2Node_MakeStruct_Anchors, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_Play_ReturnValue, FText K2Node_CustomEvent_SetHeadline, UTexture2D* K2Node_CustomEvent_Icon, FObjectiveMissionIcon K2Node_CustomEvent_MissionIcon, bool CallFunc_TextIsEmpty_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FMediaPlayerOptions K2Node_MakeStruct_MediaPlayerOptions, bool CallFunc_OpenSourceWithOptions_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UMaterialInterface* K2Node_CustomEvent_Material, FVector2D K2Node_CustomEvent_Size, UPanelSlot* CallFunc_AddChild_ReturnValue, UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, ESlateVisibility K2Node_Select_Default, FMargin K2Node_MakeStruct_Margin, OnMediaPlayerMediaOpened__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FString K2Node_CustomEvent_OpenedUrl, bool CallFunc_Play_ReturnValue_1);
    void OnShown__DelegateSignature();
}

#endif
