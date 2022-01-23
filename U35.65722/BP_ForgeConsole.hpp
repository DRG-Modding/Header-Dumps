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
    void ExecuteUbergraph_BP_ForgeConsole(int32 EntryPoint, class UWindowWidget* K2Node_Event_WindowWidget, FExecuteUbergraph_BP_ForgeConsoleK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UMENU_Forge_C* K2Node_DynamicCast_AsMENU_Forge, bool K2Node_DynamicCast_bSuccess, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UConsoleScreen_Base_C* K2Node_DynamicCast_AsConsole_Screen_Base, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
