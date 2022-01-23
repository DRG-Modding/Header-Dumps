#ifndef UE4SS_SDK_Basic_Menu_LargeWindowWithHeaderWhite_HPP
#define UE4SS_SDK_Basic_Menu_LargeWindowWithHeaderWhite_HPP

class UBasic_Menu_LargeWindowWithHeaderWhite_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
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

    void Set Header Text(FText InText, FText CallFunc_TextToUpper_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_Basic_Menu_LargeWindowWithHeaderWhite(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_3, bool K2Node_Event_IsDesignTime, FString CallFunc_GetProjectVersion_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue);
};

#endif
