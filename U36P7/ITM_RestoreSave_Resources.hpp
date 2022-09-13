#ifndef UE4SS_SDK_ITM_RestoreSave_Resources_HPP
#define UE4SS_SDK_ITM_RestoreSave_Resources_HPP

class UITM_RestoreSave_Resources_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* ParentBox;
    class UHorizontalBox* ParentBox2;
    TArray<class UResourceData*> Resources;
    TMap<class UResourceData*, class UITM_TopBar_ResourceCounter_C*> ResourceWidgets;
    bool IsDesignTime;

    void AddResource(class UResourceData* InResource, bool InHideWhenZero, int32 Index);
    void SetResources(TArray<class UResourceData*>& InResources);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnResourceAmountChanged(class UResourceData* Resource, float currentAmount);
    void ExecuteUbergraph_ITM_RestoreSave_Resources(int32 EntryPoint);
};

#endif
