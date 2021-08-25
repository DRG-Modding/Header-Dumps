// AnimBlueprintGeneratedClass ABP_SpikeyPlant_A.ABP_SpikeyPlant_A_C
// Size: 0x8aa (Inherited: 0x270)
struct UABP_SpikeyPlant_A_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2a8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x348(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x370(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x3e8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x418(0x78)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x490(0x78)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x508(0xc8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x5d0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x600(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x678(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6a8(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x720(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x750(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7c8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7f8(0xb0)
	bool IsExtruded; // 0x8a8(0x01)
	bool IsTriggered; // 0x8a9(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_SpikeyPlant_A.ABP_SpikeyPlant_A_C.AnimGraph
	void BlueprintBeginPlay(); // Function ABP_SpikeyPlant_A.ABP_SpikeyPlant_A_C.BlueprintBeginPlay
	void Change state(bool Is Extruded, bool Is Triggered); // Function ABP_SpikeyPlant_A.ABP_SpikeyPlant_A_C.Change state
	void ExecuteUbergraph_ABP_SpikeyPlant_A(int32_t EntryPoint); // Function ABP_SpikeyPlant_A.ABP_SpikeyPlant_A_C.ExecuteUbergraph_ABP_SpikeyPlant_A
};

