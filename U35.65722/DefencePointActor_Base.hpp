#ifndef UE4SS_SDK_DefencePointActor_Base_HPP
#define UE4SS_SDK_DefencePointActor_Base_HPP

class ADefencePointActor_Base_C : public ADefensePointActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* Terrain scanner mesh;
    class UStaticMeshComponent* DistressSphere;
    class UCapsuleComponent* UseableCollider;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;

    void DefenseStart();
    void OnDefenseSucceed();
    void OnDefenceFailed();
    void DefenseComplete();
    void DefenseFail();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_DefencePointActor_Base(int32 EntryPoint, FExecuteUbergraph_DefencePointActor_BaseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_DefencePointActor_BaseK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class AEVENT_Defense_Base_C* K2Node_DynamicCast_AsEVENT_Defense_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
};

#endif
