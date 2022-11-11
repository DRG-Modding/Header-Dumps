#ifndef UE4SS_SDK_BP_SpaceRig_Cabin01_HPP
#define UE4SS_SDK_BP_SpaceRig_Cabin01_HPP

class ABP_SpaceRig_Cabin01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* BP_MinersManual;
    class UPointLightComponent* PointLight8;
    class UPointLightComponent* PointLight7;
    class UPointLightComponent* PointLight6;
    class UPointLightComponent* PointLight5;
    class UStaticMeshComponent* StaticMeshComponent016;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UStaticMeshComponent* SM_FireExtinguisher_0014;
    class UStaticMeshComponent* SM_FireExtinguisher_0013;
    class UStaticMeshComponent* SM_FireExtinguisher_0012;
    class UStaticMeshComponent* SM_PosItNote_001;
    class UStaticMeshComponent* SM_FireExtinguisher_0011;
    class UStaticMeshComponent* SM_FireExtinguisher_0010;
    class UStaticMeshComponent* SM_FireExtinguisher_009;
    class UStaticMeshComponent* SM_FireExtinguisher_008;
    class UStaticMeshComponent* SM_FireExtinguisher_007;
    class UStaticMeshComponent* SM_FireExtinguisher_006;
    class UStaticMeshComponent* SM_FireExtinguisher_005;
    class UStaticMeshComponent* SM_FireExtinguisher_004;
    class UStaticMeshComponent* SM_FireExtinguisher_003;
    class UStaticMeshComponent* SM_FireExtinguisher_002;
    class UStaticMeshComponent* SM_FireExtinguisher_001;
    class UChildActorComponent* Monitor_MotivationalQuotes1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* StaticMeshComponent018;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMeshComponent017;
    class UStaticMeshComponent* StaticMeshComponent015;
    class UStaticMeshComponent* StaticMeshComponent014;
    class UStaticMeshComponent* StaticMeshComponent013;
    class UChildActorComponent* Monitor_MotivationalQuotes;
    class UStaticMeshComponent* StaticMeshComponent012;
    class UStaticMeshComponent* StaticMeshComponent011;
    class UStaticMeshComponent* StaticMeshComponent010;
    class UStaticMeshComponent* StaticMeshComponent09;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMeshComponent08;
    class UStaticMeshComponent* StaticMeshComponent07;
    class UStaticMeshComponent* StaticMeshComponent05;
    class UStaticMeshComponent* StaticMesh2;
    class UChildActorComponent* BP_MissionStats;
    class USceneComponent* Scene1;
    class UAudioComponent* SimpleConstant_steam_cue;
    class UParticleSystemComponent* P_SpaceRig_GrateSteam01;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* SM_Vent_A_2m;
    class UStaticMeshComponent* SM_Vent_A;
    class UStaticMeshComponent* StaticMeshComponent06;
    class UStaticMeshComponent* StaticMeshComponent04;
    class UStaticMeshComponent* cabin;
    class USceneComponent* Scene;

    void ReceiveBeginPlay();
    void Steam();
    void ExecuteUbergraph_BP_SpaceRig_Cabin01(int32 EntryPoint);
};

#endif
