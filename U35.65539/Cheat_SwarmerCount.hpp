#ifndef UE4SS_SDK_Cheat_SwarmerCount_HPP
#define UE4SS_SDK_Cheat_SwarmerCount_HPP

class UCheat_SwarmerCount_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TimeToWave;
    UTerrainMaterial* Material;

    void Construct();
    void BP_OnRefresh();
    void ExecuteUbergraph_Cheat_SwarmerCount(int32 EntryPoint, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue);
}

#endif
