#ifndef UE4SS_SDK_ProfileEntry_HPP
#define UE4SS_SDK_ProfileEntry_HPP

class UProfileEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Category;
    class UTextBlock* Context;
    class UTextBlock* TimeSpent;
    FProfileEntry Entry;

    void Construct();
    void ExecuteUbergraph_ProfileEntry(int32 EntryPoint, bool Temp_bool_Variable, FText Temp_text_Variable, FText CallFunc_Conv_FloatToText_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_Conv_ObjectToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, FText K2Node_Select_Default);
};

#endif
