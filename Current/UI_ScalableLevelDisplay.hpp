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

    void SetLevel(int32 Level);
    void SetText(FText Text, bool UpperCase);
    void SetMode(bool InShowClass);
    void SetWidth(float InWidth);
    void SetMargin(float In Size X);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_ScalableLevelDisplay(int32 EntryPoint);
};

#endif
