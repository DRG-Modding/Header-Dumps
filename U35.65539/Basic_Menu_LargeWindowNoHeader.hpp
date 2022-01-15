#ifndef UE4SS_SDK_Basic_Menu_LargeWindowNoHeader_HPP
#define UE4SS_SDK_Basic_Menu_LargeWindowNoHeader_HPP

class UBasic_Menu_LargeWindowNoHeader_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* dataReadout;
    UBorder* MainWindowBG;
    UBorder* MainWindowBorder_Bottom;
    UNamedSlot* PutStuffHere;
    UTextBlock* TextBlock_3;
    float BG_Opacity;
    FLinearColor Edge_Tint;
    FText HeaderText;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader(int32 EntryPoint, FString CallFunc_GetProjectVersion_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FText CallFunc_Conv_StringToText_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool K2Node_Event_IsDesignTime);
}

#endif
