#ifndef UE4SS_SDK_BP_HackerJunk_Base_HPP
#define UE4SS_SDK_BP_HackerJunk_Base_HPP

class ABP_HackerJunk_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* BoxCollision;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UStaticMesh*> Meshes;

    void UserConstructionScript(int32 CallFunc_Array_Length_ReturnValue, class UStaticMesh* CallFunc_Array_GetRandom_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HackerJunk_Base(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_RandomUnitVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
};

#endif
