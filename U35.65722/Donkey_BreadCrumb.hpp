#ifndef UE4SS_SDK_Donkey_BreadCrumb_HPP
#define UE4SS_SDK_Donkey_BreadCrumb_HPP

class ADonkey_BreadCrumb_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Donkey_DestinationMarker;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Shape_Cone3;
    class UStaticMeshComponent* Shape_Cone;
    class UStaticMeshComponent* Sphere;
    class UStaticMeshComponent* TerrainScannerMesh;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_Light02;
    class UPointLightComponent* PointLight_NoShadow;
    class UStaticMeshComponent* mesh_front;
    class UStaticMeshComponent* Mesh_Light;
    class USceneComponent* Scene;
    FRotator NextPointLookat;

    void OnRep_NextPointLookat(FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult);
    void SetNextArrowPoint(FVector NextPoint, FVector CallFunc_GetArrowPoint_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue);
    FVector GetArrowPoint(FVector CallFunc_K2_GetComponentLocation_ReturnValue);
    void ReceiveBeginPlay();
    void Blink();
    void Blink_Photosensitive();
    void ExecuteUbergraph_Donkey_BreadCrumb(int32 EntryPoint, FExecuteUbergraph_Donkey_BreadCrumbK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_Donkey_BreadCrumbK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1);
};

#endif
