#ifndef UE4SS_SDK_Donkey_BreadCrumb_HPP
#define UE4SS_SDK_Donkey_BreadCrumb_HPP

class ADonkey_BreadCrumb_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_Donkey_DestinationMarker;
    UStaticMeshComponent* StaticMesh;
    UStaticMeshComponent* Shape_Cone3;
    UStaticMeshComponent* Shape_Cone;
    UStaticMeshComponent* Sphere;
    UStaticMeshComponent* TerrainScannerMesh;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* SM_Light02;
    UPointLightComponent* PointLight_NoShadow;
    UStaticMeshComponent* mesh_front;
    UStaticMeshComponent* Mesh_Light;
    USceneComponent* Scene;
    FRotator NextPointLookat;

    void OnRep_NextPointLookat(FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult);
    void SetNextArrowPoint(FVector NextPoint, FVector CallFunc_GetArrowPoint_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue);
    FVector GetArrowPoint(FVector CallFunc_K2_GetComponentLocation_ReturnValue);
    void ReceiveBeginPlay();
    void Blink();
    void Blink_Photosensitive();
    void ExecuteUbergraph_Donkey_BreadCrumb(int32 EntryPoint, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1);
}

#endif
