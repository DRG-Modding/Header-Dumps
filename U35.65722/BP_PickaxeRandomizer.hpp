#ifndef UE4SS_SDK_BP_PickaxeRandomizer_HPP
#define UE4SS_SDK_BP_PickaxeRandomizer_HPP

class ABP_PickaxeRandomizer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_BladeFront;
    class UStaticMeshComponent* Mesh_Shaft;
    class UStaticMeshComponent* Mesh_Pommel;
    class UStaticMeshComponent* Mesh_Head;
    class UStaticMeshComponent* Mesh_Handle;
    class UStaticMeshComponent* Mesh_BladeBack;
    class USceneComponent* Scene;
    TArray<TSoftObjectPtr<UStaticMesh>> MeshesToLoad;
    TArray<TSoftObjectPtr<UStaticMesh>> BladesFront;
    TArray<TSoftObjectPtr<UStaticMesh>> BladesBack;
    TArray<TSoftObjectPtr<UStaticMesh>> Heads;
    TArray<TSoftObjectPtr<UStaticMesh>> Shafts;
    TArray<TSoftObjectPtr<UStaticMesh>> Handles;
    TArray<TSoftObjectPtr<UStaticMesh>> Pommels;
    TArray<TSoftObjectPtr<UMaterialInstance>> Materials;
    TSoftObjectPtr<UMaterialInstance> ChosenMaterial;

    void SetStaticMesh(class UStaticMeshComponent* MeshComponent, int32 Index, TSoftObjectPtr<UStaticMesh> CallFunc_Array_Get_Item, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetStaticMesh_ReturnValue);
    void SelectRandomMesh(TArray<TSoftObjectPtr<UStaticMesh>>& Array, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, TSoftObjectPtr<UStaticMesh> CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue);
    void ReceiveBeginPlay();
    void Loaded();
    void LoadedMaterial();
    void ExecuteUbergraph_BP_PickaxeRandomizer(int32 EntryPoint, class UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, FExecuteUbergraph_BP_PickaxeRandomizerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_BP_PickaxeRandomizerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_LastIndex_ReturnValue, class UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, TSoftObjectPtr<UMaterialInstance> CallFunc_Array_Get_Item, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess);
};

#endif
