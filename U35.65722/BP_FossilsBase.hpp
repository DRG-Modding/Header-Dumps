#ifndef UE4SS_SDK_BP_FossilsBase_HPP
#define UE4SS_SDK_BP_FossilsBase_HPP

class ABP_FossilsBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class USceneComponent* DefaultSceneRoot;
    class USoundBase* SpookyAudio;
    float AudioActivationDistance;
    FRandRange RandomScale;

    void UserConstructionScript(float CallFunc_GetFloatValue_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue);
    void ReceiveBeginPlay();
    void OnLocalPlayerClose(class APlayerCharacter* Player, bool enteredTrigger);
    void ExecuteUbergraph_BP_FossilsBase(int32 EntryPoint, FExecuteUbergraph_BP_FossilsBaseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FVector CallFunc_K2_GetActorLocation_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger);
};

#endif
