// WidgetBlueprintGeneratedClass UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C
// Size: 0x270 (Inherited: 0x230)
struct UUI_CoreInfuser_Rewards_Animator_C : UUserWidget {
	struct UWidgetAnimation* AnimOpen; // 0x230(0x08)
	struct UNamedSlot* CenterSlot; // 0x238(0x08)
	struct UNamedSlot* LeftSlot; // 0x240(0x08)
	struct UNamedSlot* RewardSlot; // 0x248(0x08)
	struct UNamedSlot* RightSlot; // 0x250(0x08)
	bool IsOpen; // 0x258(0x01)
	char UnknownData_259[0x7]; // 0x259(0x07)
	struct FMulticastInlineDelegate OnOpenChanged; // 0x260(0x10)

	void ShowAsReward(bool IsReward); // Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.ShowAsReward
	void GetIsOpen(bool IsOpen); // Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.GetIsOpen
	void SetOpen(bool InIsOpen); // Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.SetOpen
	void OnOpenChanged__DelegateSignature(bool Open); // Function UI_CoreInfuser_Rewards_Animator.UI_CoreInfuser_Rewards_Animator_C.OnOpenChanged__DelegateSignature
};

