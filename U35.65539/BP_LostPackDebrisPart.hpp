#ifndef UE4SS_SDK_BP_LostPackDebrisPart_HPP
#define UE4SS_SDK_BP_LostPackDebrisPart_HPP

class ABP_LostPackDebrisPart_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UStaticMeshComponent* DebrisMesh;
    USphereComponent* Sphere;
    UDropToTerrainComponent* DropToTerrain;
    UTerrainDetectComponent* TerrainDetect;
    USceneComponent* DefaultSceneRoot;
    int32 Version;

    void OnRep_Version(int32 Temp_int_Variable, UStaticMesh* Temp_object_Variable, UStaticMesh* Temp_object_Variable_1, UStaticMesh* Temp_object_Variable_2, UStaticMesh* Temp_object_Variable_3, UStaticMesh* Temp_object_Variable_4, UStaticMesh* Temp_object_Variable_5, UStaticMesh* Temp_object_Variable_6, UStaticMesh* Temp_object_Variable_7, UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LostPackDebrisPart(int32 EntryPoint, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
