#ifndef UE4SS_SDK_BP_LostPackDebrisPart_HPP
#define UE4SS_SDK_BP_LostPackDebrisPart_HPP

class ABP_LostPackDebrisPart_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* DebrisMesh;
    class USphereComponent* Sphere;
    class UDropToTerrainComponent* DropToTerrain;
    class UTerrainDetectComponent* TerrainDetect;
    class USceneComponent* DefaultSceneRoot;
    int32 Version;

    void OnRep_Version(int32 Temp_int_Variable, class UStaticMesh* Temp_object_Variable, class UStaticMesh* Temp_object_Variable_1, class UStaticMesh* Temp_object_Variable_2, class UStaticMesh* Temp_object_Variable_3, class UStaticMesh* Temp_object_Variable_4, class UStaticMesh* Temp_object_Variable_5, class UStaticMesh* Temp_object_Variable_6, class UStaticMesh* Temp_object_Variable_7, class UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LostPackDebrisPart(int32 EntryPoint, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
};

#endif
