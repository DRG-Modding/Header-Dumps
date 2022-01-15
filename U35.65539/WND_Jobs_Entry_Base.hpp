#ifndef UE4SS_SDK_WND_Jobs_Entry_Base_HPP
#define UE4SS_SDK_WND_Jobs_Entry_Base_HPP

class UWND_Jobs_Entry_Base_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FWND_Jobs_Entry_Base_CUnfolded Unfolded;
    void Unfolded(UWND_Jobs_Entry_Base_C* Entry);
    FWND_Jobs_Entry_Base_CUpdated Updated;
    void Updated();

    void Fold();
    void SetData(UCampaign* Campaign);
    void Refresh();
    void Unfold();
    void ExecuteUbergraph_WND_Jobs_Entry_Base(int32 EntryPoint, UCampaign* K2Node_CustomEvent_Campaign);
    void Updated__DelegateSignature();
    void Unfolded__DelegateSignature(UWND_Jobs_Entry_Base_C* Entry);
}

#endif
