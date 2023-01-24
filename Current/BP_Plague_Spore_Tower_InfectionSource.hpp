#ifndef UE4SS_SDK_BP_Plague_Spore_Tower_InfectionSource_HPP
#define UE4SS_SDK_BP_Plague_Spore_Tower_InfectionSource_HPP

class ABP_Plague_Spore_Tower_InfectionSource_C : public ABP_Plague_Spore_Tower_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* MeteoritePath4;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_MeteoritePAthFill1;
    class UStaticMeshComponent* MeteoritePath3;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_MeteoritePath2;
    class UStaticMeshComponent* MeteorShard05-HIdden;
    class USceneComponent* Scene;
    class UStaticMeshComponent* MeteorShard03;
    class UStaticMeshComponent* MeteorShard02;
    class UStaticMeshComponent* MeteorShard01;
    class UStaticMeshComponent* MeteorShard06-Hidden;
    class UStaticMeshComponent* MeteorShard04;
    class USceneComponent* MainMeteor;
    class UStaticMeshComponent* ImpactCraterCarver;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_IMpactCrater;
    class UStaticMeshComponent* PlagueBump;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_PlagueBump;
    class UStaticMeshComponent* SM_Meteor_Shard_04;
    class UStaticMeshComponent* SM_Meteor_Shard_03;
    class UStaticMeshComponent* SM_Meteor_Shard_02;
    class UStaticMeshComponent* SM_Meteor_Shard_01;
    class UChildActorComponent* Crevasse01;
    class UStaticMeshComponent* SM_Meteor_Shard_05;
    class UChildActorComponent* Crevasse04;
    class UChildActorComponent* Crevasse03;
    class UChildActorComponent* Crevasse02;
    class UChildActorComponent* Crevasse05;
    class USceneComponent* CrevasseAndShards;
    class UStaticMeshComponent* MeteoritePath2;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_MeteoritePAthFill;
    class UStaticMeshComponent* MeteoritePath1;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_MeteoritePath1;
    class UChildActorComponent* BP_InfectionSource;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Plague_Spore_Tower_InfectionSource(int32 EntryPoint);
};

#endif
