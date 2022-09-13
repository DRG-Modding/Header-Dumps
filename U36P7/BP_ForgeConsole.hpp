#ifndef UE4SS_SDK_BP_ForgeConsole_HPP
#define UE4SS_SDK_BP_ForgeConsole_HPP

class ABP_ForgeConsole_C : public ABP_BaseSpaceRigConsole_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* CollisionBox5;
    class UStaticMeshComponent* LightCone;
    class UParticleSystemComponent* ParticleSystem_Smoke2;
    class UPointLightComponent* PointLight Forge;
    class USpotLightComponent* SpotLight Lamp;
    class UBoxComponent* CollisionBox4;
    class UBoxComponent* CollisionBox3;
    class UBoxComponent* CollisionBox2;
    class USkeletalMeshComponent* SkeletalMesh Forge;
    class UBoxComponent* CollisionBox1;
    class UPointLightComponent* PointLight Lamp;
    class UParticleSystemComponent* ParticleSystem_Smoke;

    void OnWindowCreated(class UWindowWidget* WindowWidget);
    void UpdateNotificationBanner();
    void ExecuteUbergraph_BP_ForgeConsole(int32 EntryPoint);
};

#endif
