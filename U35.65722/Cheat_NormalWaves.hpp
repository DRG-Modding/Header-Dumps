#ifndef UE4SS_SDK_Cheat_NormalWaves_HPP
#define UE4SS_SDK_Cheat_NormalWaves_HPP

class UCheat_NormalWaves_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TimeToWave;
    class UTerrainMaterial* Material;

    void Construct();
    void BP_OnRefresh();
    void ExecuteUbergraph_Cheat_NormalWaves(int32 EntryPoint, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UEnemyWaveManager* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

#endif
