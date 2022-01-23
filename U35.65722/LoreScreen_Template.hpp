#ifndef UE4SS_SDK_LoreScreen_Template_HPP
#define UE4SS_SDK_LoreScreen_Template_HPP

class ULoreScreen_Template_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* MovieIntro;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UImage* HeaderImage;
    class UImage* Image_Background;
    class UImage* Image_Gradient;
    class UImage* Image_MovieBackground;
    class ULore_Content_Text_Header_C* Lore_Content_Text_Header;
    class UImage* MovieCanvas;
    class UOverlay* Overlay_Holder;
    class UOverlay* Overlay_MovieCanvas;
    class UNamedSlot* PutStuffHere;
    class UScrollBox* ScrollBox_Holder;
    class USizeBox* SizeBox_OuterSizer;
    class UMediaPlayer* MediaPlayer;
    class UMediaTexture* MediaTexture;
    FLoreScreen_Template_COnShown OnShown;
    void OnShown();
    bool CanScroll;

    void SetHeadline(FText SetHeadline, class UTexture2D* Icon, FObjectiveMissionIcon MissionIcon);
    void PreConstruct(bool IsDesignTime);
    void SetHeaderMovie(const class UMediaSource* MediaSource);
    void SetHeaderImage(class UTexture2D* HeaderImage, bool Strech, float VerticalFillPercent, bool UseGradient);
    void SetHeaderMaterial(class UMaterialInterface* Material, FVector2D Size);
    void OnOpened(FString OpenedUrl);
    void ExecuteUbergraph_LoreScreen_Template(int32 EntryPoint, const class UMediaSource* K2Node_CustomEvent_MediaSource, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FString CallFunc_GetUrl_ReturnValue, class UTexture2D* K2Node_CustomEvent_HeaderImage, bool K2Node_CustomEvent_Strech, float K2Node_CustomEvent_VerticalFillPercent, bool K2Node_CustomEvent_UseGradient, FString CallFunc_GetUrl_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, FAnchors K2Node_MakeStruct_Anchors, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_Play_ReturnValue, FText K2Node_CustomEvent_SetHeadline, class UTexture2D* K2Node_CustomEvent_Icon, FObjectiveMissionIcon K2Node_CustomEvent_MissionIcon, bool CallFunc_TextIsEmpty_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FMediaPlayerOptions K2Node_MakeStruct_MediaPlayerOptions, bool CallFunc_OpenSourceWithOptions_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UMaterialInterface* K2Node_CustomEvent_Material, FVector2D K2Node_CustomEvent_Size, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, ESlateVisibility K2Node_Select_Default, FMargin K2Node_MakeStruct_Margin, FExecuteUbergraph_LoreScreen_TemplateK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FString K2Node_CustomEvent_OpenedUrl, bool CallFunc_Play_ReturnValue_1);
    void OnShown__DelegateSignature();
};

#endif
