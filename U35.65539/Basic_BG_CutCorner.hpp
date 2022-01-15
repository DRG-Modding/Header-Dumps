#ifndef UE4SS_SDK_Basic_BG_CutCorner_HPP
#define UE4SS_SDK_Basic_BG_CutCorner_HPP

class UBasic_BG_CutCorner_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* Border_1;
    UBorder* Border_100;
    UBorder* Border_107;
    UImage* Corner;
    UHorizontalBox* HorizontalBox_Border;
    USizeBox* SizeBox_0;
    float CornerSize;
    UMaterialInstanceDynamic* DynBackgroundMaterial;

    void PreConstruct(bool IsDesignTime);
    void SetBorderColor(FLinearColor InputPin);
    void ExecuteUbergraph_Basic_BG_CutCorner(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor K2Node_CustomEvent_InputPin, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
