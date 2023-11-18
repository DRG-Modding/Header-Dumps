#ifndef UE4SS_SDK_BP_Plague_Spore_Tower_InfectionSource_HPP
#define UE4SS_SDK_BP_Plague_Spore_Tower_InfectionSource_HPP

class ABP_Plague_Spore_Tower_InfectionSource_C : public ABP_Plague_Spore_Tower_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* MeteoritePath4;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_MeteoritePAthFill1;
    class UStaticMeshComponent* MeteoritePath3;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_MeteoritePath2;
    class UStaticMeshComponent* MeteorShard03;
    class UStaticMeshComponent* MeteorShard02;
    class UStaticMeshComponent* MeteorShard01;
    class UStaticMeshComponent* MeteorShard04;
    class USceneComponent* MainMeteor;
    class UStaticMeshComponent* ImpactCraterCarver;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_IMpactCrater;
    class UStaticMeshComponent* PlagueBump;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_PlagueBump;
    class UStaticMeshComponent* MeteoritePath2;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_MeteoritePAthFill;
    class UStaticMeshComponent* MeteoritePath1;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_MeteoritePath1;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Plague_Spore_Tower_InfectionSource(int32 EntryPoint);
};

#endif
