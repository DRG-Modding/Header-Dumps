#ifndef UE4SS_SDK_Basic_BG_CutCorner_Gradient_HPP
#define UE4SS_SDK_Basic_BG_CutCorner_Gradient_HPP

class UBasic_BG_CutCorner_Gradient_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_1;
    class UBorder* Border_100;
    class UBorder* Border_107;
    class UImage* Corner;
    class UHorizontalBox* HorizontalBox_Border;
    float CornerSize;
    class UMaterialInstanceDynamic* DynBackgroundMaterial;

    void PreConstruct(bool IsDesignTime);
    void SetBorderColor(FLinearColor InputPin);
    void ExecuteUbergraph_Basic_BG_CutCorner_Gradient(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FVector2D CallFunc_MakeVector2D_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor K2Node_CustomEvent_InputPin, FSlateColor K2Node_MakeStruct_SlateColor);
};

#endif
