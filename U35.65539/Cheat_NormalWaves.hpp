#ifndef UE4SS_SDK_Cheat_NormalWaves_HPP
#define UE4SS_SDK_Cheat_NormalWaves_HPP

class UCheat_NormalWaves_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TimeToWave;
    UTerrainMaterial* Material;

    void Construct();
    void BP_OnRefresh();
    void ExecuteUbergraph_Cheat_NormalWaves(int32 EntryPoint, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UEnemyWaveManager* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
