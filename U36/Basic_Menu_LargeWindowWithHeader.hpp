#ifndef UE4SS_SDK_Basic_Menu_LargeWindowWithHeader_HPP
#define UE4SS_SDK_Basic_Menu_LargeWindowWithHeader_HPP

class UBasic_Menu_LargeWindowWithHeader_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBackgroundBlur* BackgroundBlur_1;
    class UBackgroundBlur* BackgroundBlur_2;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_Top2;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBarMain;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBarMain2;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBarTop;
    class UTextBlock* DATA_headerText;
    class UBorder* HeaderBG;
    class UBorder* MainWindowBG;
    class UBorder* MainWindowBorder_Bottom;
    class UNamedSlot* PutStuffHere;
    class UTextBlock* TXT_Bottom3;
    class UTextBlock* versionTxt;
    FLinearColor Edge_Tint;
    FText HeaderText;
    bool DisableBackgroundBlur;

    void Set Header Text(FText InText);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_Basic_Menu_LargeWindowWithHeader(int32 EntryPoint);
};

#endif
