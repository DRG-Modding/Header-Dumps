#ifndef UE4SS_SDK_ITM_CurrentSaveSlot_Resources_HPP
#define UE4SS_SDK_ITM_CurrentSaveSlot_Resources_HPP

class UITM_CurrentSaveSlot_Resources_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_TopBar_ResourceCounter_C* CreditsCounter;
    class UVerticalBox* VerticalBox_0;
    TArray<class UResourceData*> Resources;
    TMap<class UResourceData*, class UITM_TopBar_ResourceCounter_C*> ResourceWidgets;
    bool IsDesignTime;

    void UpdateResourceAmount(class UFSDSaveGame* SaveSlot);
    void AddResource(class UResourceData* InResource, bool InHideWhenZero, int32 Index);
    void SetResources(TArray<class UResourceData*>& InResources);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CurrentSaveSlot_Resources(int32 EntryPoint);
};

#endif
