#ifndef UE4SS_SDK_BP_LightPost01_HPP
#define UE4SS_SDK_BP_LightPost01_HPP

class ABP_LightPost01_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Static Mesh;
    USceneComponent* Scene;
    UPointLightComponent* PointLight;
    FLinearColor Light Color;
    float Light Intensity;
    float Light Attenuation;
    TArray<UStaticMesh*> Mesh;
    int32 Mesh to use;
    float MaterialGlow;
    bool Flicker;
    int32 TimesToFlash;
    bool Casts Shadows;
    FVector Light Offset;
    UMaterialInstanceDynamic* DynamicMaterial;

    void UserConstructionScript(int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FHitResult CallFunc_K2_AddLocalOffset_SweepHitResult, FLinearColor CallFunc_GetLightColor_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LightPost01(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
}

#endif
