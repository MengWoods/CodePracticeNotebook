# SVM
SVM offers very high accuracy compared to other classifiers such as logistic regression, and decision trees. 
It is known for its kernel trick to handle nonlinear input spaces. 
It is used in a variety of applications such as face detection, intrusion detection, classification of emails, 
news articles and web pages, classification of genes, and handwriting recognition.

SVM is an exciting algorithm and the concepts are relatively simple. 
The classifier separates data points using a hyperplane with the largest amount of margin. 
That's why an SVM classifier is also known as a discriminative classifier. SVM finds an optimal hyperplane which helps in classifying new data points.


 The core idea of SVM is to find a maximum marginal hyperplane(MMH) that best divides the dataset into classes.

 The SVM algorithm is implemented in practice using a kernel. A kernel transforms an input data space into the required form. SVM uses a technique called the kernel trick. Here, the kernel takes a low-dimensional input space and transforms it into a higher dimensional space. In other words, you can say that it converts nonseparable problem to separable problems by adding more dimension to it. It is most useful in non-linear separation problem. Kernel trick helps you to build a more accurate classifier.

 - Linear kernel
 - Polynomial Kernel 
 - Radial Basis Function Kernel


Advantages
SVM Classifiers offer good accuracy and perform faster prediction compared to Naïve Bayes algorithm. 
They also use less memory because they use a subset of training points in the decision phase. 
SVM works well with a clear margin of separation and with high dimensional space.

Disadvantages
SVM is not suitable for large datasets because of its high training time and it also takes more time in training compared to Naïve Bayes. 
It works poorly with overlapping classes and is also sensitive to the type of kernel used.

