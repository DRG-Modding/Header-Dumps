#ifndef UE4SS_SDK_BP_PickaxeRandomizer_HPP
#define UE4SS_SDK_BP_PickaxeRandomizer_HPP

class ABP_PickaxeRandomizer_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Mesh_BladeFront;
    UStaticMeshComponent* Mesh_Shaft;
    UStaticMeshComponent* Mesh_Pommel;
    UStaticMeshComponent* Mesh_Head;
    UStaticMeshComponent* Mesh_Handle;
    UStaticMeshComponent* Mesh_BladeBack;
    USceneComponent* Scene;
    TArray<TSoftObjectPtr<UStaticMesh>> MeshesToLoad;
    TArray<TSoftObjectPtr<UStaticMesh>> BladesFront;
    TArray<TSoftObjectPtr<UStaticMesh>> BladesBack;
    TArray<TSoftObjectPtr<UStaticMesh>> Heads;
    TArray<TSoftObjectPtr<UStaticMesh>> Shafts;
    TArray<TSoftObjectPtr<UStaticMesh>> Handles;
    TArray<TSoftObjectPtr<UStaticMesh>> Pommels;
    TArray<TSoftObjectPtr<UMaterialInstance>> Materials;
    TSoftObjectPtr<UMaterialInstance> ChosenMaterial;

    void SetStaticMesh(UStaticMeshComponent* MeshComponent, int32 Index, SoftObjectProperty CallFunc_Array_Get_Item, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetStaticMesh_ReturnValue);
    void SelectRandomMesh(TArray<SoftObjectProperty>& Array, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, SoftObjectProperty CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue);
    void ReceiveBeginPlay();
    void Loaded();
    void LoadedMaterial();
    void ExecuteUbergraph_BP_PickaxeRandomizer(int32 EntryPoint, UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, AsyncLoadCompleteDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AsyncLoadCompleteDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_LastIndex_ReturnValue, UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, SoftObjectProperty CallFunc_Array_Get_Item, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess);
}

#endif
