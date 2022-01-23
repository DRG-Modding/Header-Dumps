#ifndef UE4SS_SDK_UI_ScalableLevelDisplay_HPP
#define UE4SS_SDK_UI_ScalableLevelDisplay_HPP

class UUI_ScalableLevelDisplay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_Level;
    class UTextBlock* DATA_Name;
    class UBorder* Holder_Level;
    class UBorder* Holder_Name;
    class UImage* Img_Icon;
    class USizeBox* SizeBox_5;
    class USpacer* Spacer_199;
    bool ShowClassInstead;
    float LeftMargin;
    float Width;

    void SetLevel(int32 Level, FText CallFunc_Conv_IntToText_ReturnValue);
    void SetText(FText Text, bool UpperCase, bool Temp_bool_Variable, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default);
    void SetMode(bool InShowClass, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, FLinearColor CallFunc_SelectMenuColor_OutputColor, class UTexture2D* K2Node_Select_Default, FLinearColor CallFunc_SelectMenuColor_OutputColor_1);
    void SetWidth(float InWidth);
    void SetMargin(float In Size X, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_ScalableLevelDisplay(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
