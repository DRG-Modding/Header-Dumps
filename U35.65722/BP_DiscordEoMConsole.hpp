#ifndef UE4SS_SDK_BP_DiscordEoMConsole_HPP
#define UE4SS_SDK_BP_DiscordEoMConsole_HPP

class ABP_DiscordEoMConsole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Cube1;
    class UWidgetComponent* PSA;
    class UBoxComponent* Box;
    class UWidgetComponent* Widget;
    class USceneComponent* DefaultSceneRoot;
    float LastUpdate;
    class UConsole_DiscordEoMScreen_C* DiscordConsole;
    bool HEOM;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void RecieveEoMData(bool HasEoM);
    void ExecuteUbergraph_BP_DiscordEoMConsole(int32 EntryPoint, FExecuteUbergraph_BP_DiscordEoMConsoleK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool K2Node_CustomEvent_HasEoM, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UConsole_DiscordEoMScreen_C* K2Node_DynamicCast_AsConsole_Discord_Eo_MScreen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UConsole_DiscordEoMScreen_C* K2Node_DynamicCast_AsConsole_Discord_Eo_MScreen_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class UConsole_DiscordEoMScreen_C* K2Node_DynamicCast_AsConsole_Discord_Eo_MScreen_2, bool K2Node_DynamicCast_bSuccess_2);
};

#endif
