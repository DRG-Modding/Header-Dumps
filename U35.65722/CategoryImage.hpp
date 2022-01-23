#ifndef UE4SS_SDK_CategoryImage_HPP
#define UE4SS_SDK_CategoryImage_HPP

class UCategoryImage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_BG_CutCorner_W_Image_C* Basic_BG_CutCorner_W_Image;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    float CornerSize;
    class UMaterialInstanceDynamic* DynBackgroundMaterial;

    void PreConstruct(bool IsDesignTime);
    void SetImage(class UTexture2D* Image, FLinearColor BackgroundColor, class UTexture2D* OptionalMaskedImage);
    void SetOutlineColor(FLinearColor Color);
    void SetMissionIcon(const FObjectiveMissionIcon MissionIcon);
    void SetStyle(TEnumAsByte<E_MM_ButtonStyle::Type> IsEnabled);
    void ExecuteUbergraph_CategoryImage(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, const FObjectiveMissionIcon K2Node_CustomEvent_MissionIcon, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor K2Node_CustomEvent_Color, class UTexture2D* K2Node_CustomEvent_Image, FLinearColor K2Node_CustomEvent_BackgroundColor, class UTexture2D* K2Node_CustomEvent_OptionalMaskedImage, TEnumAsByte<E_MM_ButtonStyle::Type> K2Node_CustomEvent_IsEnabled, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool K2Node_Event_IsDesignTime);
};

#endif
