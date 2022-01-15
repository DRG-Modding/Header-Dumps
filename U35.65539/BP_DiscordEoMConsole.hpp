#ifndef UE4SS_SDK_BP_DiscordEoMConsole_HPP
#define UE4SS_SDK_BP_DiscordEoMConsole_HPP

class ABP_DiscordEoMConsole_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Cube1;
    UWidgetComponent* PSA;
    UBoxComponent* Box;
    UWidgetComponent* Widget;
    USceneComponent* DefaultSceneRoot;
    float LastUpdate;
    UConsole_DiscordEoMScreen_C* DiscordConsole;
    bool HEOM;

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void RecieveEoMData(bool HasEoM);
    void ExecuteUbergraph_BP_DiscordEoMConsole(int32 EntryPoint, DiscordEoMDataDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool K2Node_CustomEvent_HasEoM, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UConsole_DiscordEoMScreen_C* K2Node_DynamicCast_AsConsole_Discord_Eo_MScreen, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, UConsole_DiscordEoMScreen_C* K2Node_DynamicCast_AsConsole_Discord_Eo_MScreen_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_FloatFloat_ReturnValue, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, UConsole_DiscordEoMScreen_C* K2Node_DynamicCast_AsConsole_Discord_Eo_MScreen_2, bool K2Node_DynamicCast_bSuccess_2);
}

#endif
