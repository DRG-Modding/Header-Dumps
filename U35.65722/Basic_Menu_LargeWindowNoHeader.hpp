#ifndef UE4SS_SDK_Basic_Menu_LargeWindowNoHeader_HPP
#define UE4SS_SDK_Basic_Menu_LargeWindowNoHeader_HPP

class UBasic_Menu_LargeWindowNoHeader_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* dataReadout;
    class UBorder* MainWindowBG;
    class UBorder* MainWindowBorder_Bottom;
    class UNamedSlot* PutStuffHere;
    class UTextBlock* TextBlock_3;
    float BG_Opacity;
    FLinearColor Edge_Tint;
    FText HeaderText;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader(int32 EntryPoint, FString CallFunc_GetProjectVersion_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FText CallFunc_Conv_StringToText_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool K2Node_Event_IsDesignTime);
};

#endif
