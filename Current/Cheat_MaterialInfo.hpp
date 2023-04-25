#ifndef UE4SS_SDK_Cheat_MaterialInfo_HPP
#define UE4SS_SDK_Cheat_MaterialInfo_HPP

class UCheat_MaterialInfo_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_Material;
    class UTextBlock* TextBlock_SpawnedAmount;
    class UTextBlock* TextBlock_TargetAmount;
    class UTerrainMaterial* Material;
    float TargetAmount;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void SetData(float spawned, float Target);
    void ExecuteUbergraph_Cheat_MaterialInfo(int32 EntryPoint);
};

#endif
