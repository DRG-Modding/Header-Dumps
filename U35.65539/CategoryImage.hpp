#ifndef UE4SS_SDK_CategoryImage_HPP
#define UE4SS_SDK_CategoryImage_HPP

class UCategoryImage_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_BG_CutCorner_W_Image_C* Basic_BG_CutCorner_W_Image;
    UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    float CornerSize;
    UMaterialInstanceDynamic* DynBackgroundMaterial;

    void PreConstruct(bool IsDesignTime);
    void SetImage(UTexture2D* Image, FLinearColor BackgroundColor, UTexture2D* OptionalMaskedImage);
    void SetOutlineColor(FLinearColor Color);
    void SetMissionIcon(const FObjectiveMissionIcon MissionIcon);
    void SetStyle(uint8 IsEnabled);
    void ExecuteUbergraph_CategoryImage(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, const FObjectiveMissionIcon K2Node_CustomEvent_MissionIcon, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_CustomEvent_Color, UTexture2D* K2Node_CustomEvent_Image, FLinearColor K2Node_CustomEvent_BackgroundColor, UTexture2D* K2Node_CustomEvent_OptionalMaskedImage, uint8 K2Node_CustomEvent_IsEnabled, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
