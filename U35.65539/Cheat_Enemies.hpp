#ifndef UE4SS_SDK_Cheat_Enemies_HPP
#define UE4SS_SDK_Cheat_Enemies_HPP

class UCheat_Enemies_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TextBlock_0;
    UVerticalBox* VerticalBox_1;

    void SetName(FString Name, FText CallFunc_Conv_StringToText_ReturnValue);
    void Refresh();
    void ExecuteUbergraph_Cheat_Enemies(int32 EntryPoint, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
