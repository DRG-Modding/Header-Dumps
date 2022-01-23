#ifndef UE4SS_SDK_HUD_BossFight_BaseEntry_HPP
#define UE4SS_SDK_HUD_BossFight_BaseEntry_HPP

class UHUD_BossFight_BaseEntry_C : public UBossFightWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBossFight BossFightInfo;

    void GetBossFight(FBossFight& BossFight);
    void OnCanTakeDamageChanged(bool OutCanTakeDamage);
    void OnDeath();
    void OnDisengaged();
    void OnHealthChanged(float Health);
    void Construct();
    void OnFightRemoved(const TScriptInterface<class IBossFightInterface>& BossFight);
    void Setup Invulnerability();
    void ExecuteUbergraph_HUD_BossFight_BaseEntry(int32 EntryPoint, FBossFight CallFunc_GetBossFight_BossFight, class UBossFightSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const TScriptInterface<class IBossFightInterface> K2Node_CustomEvent_BossFight, class AActor* CallFunc_GetBossActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_GetCanTakeDamage_ReturnValue, FExecuteUbergraph_HUD_BossFight_BaseEntryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_BossFight_BaseEntryK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_BossFight_BaseEntryK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2);
};

#endif
