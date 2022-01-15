#ifndef UE4SS_SDK_DefencePointActor_Base_HPP
#define UE4SS_SDK_DefencePointActor_Base_HPP

class ADefencePointActor_Base_C : ADefensePointActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UStaticMeshComponent* Terrain scanner mesh;
    UStaticMeshComponent* DistressSphere;
    UCapsuleComponent* UseableCollider;
    UTerrainPlacementComponent* terrainPlacement;
    USceneComponent* DefaultSceneRoot;

    void DefenseStart();
    void OnDefenseSucceed();
    void OnDefenceFailed();
    void DefenseComplete();
    void DefenseFail();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_DefencePointActor_Base(int32 EntryPoint, DefendFailed__DelegateSignature K2Node_CreateDelegate_OutputDelegate, DefendSucceded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UEVENT_Defense_Base_C* K2Node_DynamicCast_AsEVENT_Defense_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
}

#endif
