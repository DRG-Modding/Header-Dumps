#ifndef UE4SS_SDK_SmallDataWindow_HPP
#define UE4SS_SDK_SmallDataWindow_HPP

class USmallDataWindow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBorder* ContentBG;
    class UTextBlock* DATA_headerText;
    class UBorder* HeaderBG;
    class UImage* HeaderBGcorner;
    class UNamedSlot* PutStuffHere;
    FText HeaderText;

    void SetColors();
    void SetHeaderText(class UTextBlock* DATA_headerText, FText InText);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_SmallDataWindow(int32 EntryPoint);
};

#endif
